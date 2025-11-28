cDir="${XDG_CONFIG_HOME:-$HOME/.config/vesktop/settings/settings.json}"
useQuickCss=$(jq -r '.useQuickCss' "$cDir")
scrDir="$(dirname "$(realpath "$0")")"
cpkg="vesktop"

if [[ "$useQuickCss" == "true" ]]; then
  "$scrDir/wbconfgen-discordcss.sh"
  sed -i "s|"enabledThemes": .*|"enabledThemes": [],|g" "$cDir"
else
  "$scrDir/wbconfgen-discordtheme.sh"
  sed -i 's|"enabledThemes": .*|"enabledThemes": ["system24.css"],|g' "$cDir"
fi

pgrep vesktop > /dev/null && killall -9 vesktop
sleep 0.5
vesktop &
