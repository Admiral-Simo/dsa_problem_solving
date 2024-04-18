function convert(s: string, numRows: number): string {
  if (numRows == 1 || numRows >= s.length) return s;
  let rows: string[] = new Array(numRows).fill("");
  let idx: number = 0,
    d: number = 1;

  s.split("").forEach((char) => {
    rows[idx] += char;
    if (idx == 0) d = 1;
    if (idx == numRows - 1) d = -1;
    idx += d;
  });

  return rows.join("");
}
