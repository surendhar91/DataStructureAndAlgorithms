import java.awt.Point;
import java.io.*;
import java.math.BigInteger;
import java.util.*;
import static java.lang.Math.*;

public class DPMissingNumbers implements Runnable {

    BufferedReader in;
    PrintWriter out;
    StringTokenizer tok = new StringTokenizer("");

    public static void main(String[] args) {
        new Thread(null, new DPMissingNumbers(), "", 256 * (1L << 20)).start();
    }

    public void run() {
        try {
            long t1 = System.currentTimeMillis();
            in = new BufferedReader(new InputStreamReader(System.in));
            out = new PrintWriter(System.out);
         //   in = new BufferedReader(new FileReader("src/input.txt"));
            Locale.setDefault(Locale.US);
            solve();
            in.close();
            out.close();
            long t2 = System.currentTimeMillis();
            System.err.println("Time = " + (t2 - t1));
        } catch (Throwable t) {
            t.printStackTrace(System.err);
            System.exit(-1);
        }
    }

    String readString() throws IOException {
        while (!tok.hasMoreTokens()) {
            tok = new StringTokenizer(in.readLine());
        }
        return tok.nextToken();
    }

    int readInt() throws IOException {
        return Integer.parseInt(readString());
    }

    long readLong() throws IOException {
        return Long.parseLong(readString());
    }

    double readDouble() throws IOException {
        return Double.parseDouble(readString());
    }

    // solution
    void solve() throws IOException {
        int n = readInt();
        int m = readInt();
        int k = readInt();
        int[][] costII = new int[n][m], costID = new int[n][m], costJI = new int[n][m], costJD = new int[n][m];
        for (int i = 0; i < n; i++) {
            Arrays.fill(costII[i], 1);
            Arrays.fill(costID[i], 1);
            Arrays.fill(costJI[i], 1);
            Arrays.fill(costJD[i], 1);
        }
        int targetX = 0, targetY = 0;
        for (int i = 0; i < n; i++) {
            String s = in.readLine();
            for (int j = 0; j < m; j++) {
                if (s.charAt(j) == '*') {
                    targetX = i;
                    targetY = j;
                }
                switch (s.charAt(j)) {
                    case 'U':
                        costID[i][j] = 0;
                        break;
                    case 'D':
                        costII[i][j] = 0;
                        break;
                    case 'L':
                        costJD[i][j] = 0;
                        break;
                    case 'R':
                        costJI[i][j] = 0;
                        break;
                }
            }
        }

        int[][][] f = new int[n][m][k + 1];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                Arrays.fill(f[i][j], Integer.MAX_VALUE / 2);
            }
        }

        f[0][0][0] = 0;
        for (int time = 0; time < k; time++) {
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < m; j++) {
                    if (i > 0) {
                        f[i - 1][j][time + 1] = Math.min(f[i - 1][j][time + 1], f[i][j][time] + costID[i][j]);
					}
                    if (j > 0) {
                        f[i][j - 1][time + 1] = Math.min(f[i][j - 1][time + 1], f[i][j][time] + costJD[i][j]);
                    }
                    if (i < n - 1) {
                        f[i + 1][j][time + 1] = Math.min(f[i + 1][j][time + 1], f[i][j][time] + costII[i][j]);
                    }
                    if (j < m - 1) {
                        f[i][j + 1][time + 1] = Math.min(f[i][j + 1][time + 1], f[i][j][time] + costJI[i][j]);
                    }
                    f[i][j][time + 1] = Math.min(f[i][j][time + 1], f[i][j][time]);
                }
				
            }
        }
        if (f[targetX][targetY][k] > n * m)
            out.println(-1);
        else{
			//out.println("Target X "+targetX+" Target y "+targetY+" k "+k);
            out.println(f[targetX][targetY][k]);
		}
	}
}