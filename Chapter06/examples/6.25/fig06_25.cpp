/*
 * =====================================================================================
 *
 *       Filename:  fig06_25.cpp
 *
 *    Description:  Fig. 6.25: Name mangling
 *
 *        Version:  1.0
 *        Created:  11/04/16 16:14:53
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
int square(int x) { return x * x; }
double square(double y) { return y * y; }
void nothing1(int a, float b, char c, int& d) {}
int nothing2(char a, int b, float& c, double& d) { return 0; }
int main(int argc, const char* argv[]) { return 0; }
