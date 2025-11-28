const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#0e1321", /* black   */
  [1] = "#4B4B54", /* red     */
  [2] = "#61606C", /* green   */
  [3] = "#3C5780", /* yellow  */
  [4] = "#727489", /* blue    */
  [5] = "#80818E", /* magenta */
  [6] = "#9896A4", /* cyan    */
  [7] = "#c2c4c7", /* white   */

  /* 8 bright colors */
  [8]  = "#5d6272",  /* black   */
  [9]  = "#4B4B54",  /* red     */
  [10] = "#61606C", /* green   */
  [11] = "#3C5780", /* yellow  */
  [12] = "#727489", /* blue    */
  [13] = "#80818E", /* magenta */
  [14] = "#9896A4", /* cyan    */
  [15] = "#c2c4c7", /* white   */

  /* special colors */
  [256] = "#0e1321", /* background */
  [257] = "#c2c4c7", /* foreground */
  [258] = "#c2c4c7",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
