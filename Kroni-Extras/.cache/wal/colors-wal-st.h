const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#150915", /* black   */
  [1] = "#382667", /* red     */
  [2] = "#4B315F", /* green   */
  [3] = "#624D69", /* yellow  */
  [4] = "#856671", /* blue    */
  [5] = "#5B3887", /* magenta */
  [6] = "#6A5395", /* cyan    */
  [7] = "#c4c1c4", /* white   */

  /* 8 bright colors */
  [8]  = "#6c586c",  /* black   */
  [9]  = "#382667",  /* red     */
  [10] = "#4B315F", /* green   */
  [11] = "#624D69", /* yellow  */
  [12] = "#856671", /* blue    */
  [13] = "#5B3887", /* magenta */
  [14] = "#6A5395", /* cyan    */
  [15] = "#c4c1c4", /* white   */

  /* special colors */
  [256] = "#150915", /* background */
  [257] = "#c4c1c4", /* foreground */
  [258] = "#c4c1c4",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
