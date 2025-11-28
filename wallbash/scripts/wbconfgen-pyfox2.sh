#!/usr/bin/env bash

thmDir="${XDG_CONFIG_HOME:-$HOME/.config/wallbash}"
thmDcol="$thmDir/theme.wallbash"
pythmTarget="$HOME/.cache/wal/colors.json"

declare -A wallbash

while IFS='=' read -r key val; do
    [[ -z "$key" || -z "$val" ]] && continue
    wallbash["$key"]="$val"
done < "$thmDcol"

sed -i "s|\"color0\": .*|\"color0\": \"${wallbash[wallbash_pry1]}\",|" "$pythmTarget"
sed -i "s|\"color10\": .*|\"color10\": \"${wallbash[wallbash_1xa7]}\",|" "$pythmTarget"

sed -i "s|\"color13\": .*|\"color13\": \"${wallbash[wallbash_3xa9]}\",|" "$pythmTarget"
sed -i "s|\"color15\": .*|\"color15\": \"${wallbash[wallbash_txt3]}\"|" "$pythmTarget"
pywalfox update
echo "[Wallbash] Pyfox Color Generation Completed."
