#include <fstream>
using namespace std;
int cmmdc(int, int);
int main()
{
	ifstream f("vraji.in");
	int n, p, v;
	f >> n;
	f >> p >> v;
	int nr = p*v, dc, nrmax;
	dc = nrmax = nr;
	while (n > 1)
	{
		f >> p >> v;
		nr = p*v;
		if (nr > nrmax) nrmax = nr;
		dc = cmmdc(dc, nr);
		n--;
	}
	f.close();
	ofstream g("vraji.out");
	g << nrmax << '\n' << dc;
	g.close();
	return 0;
}
int cmmdc(int a, int b)
{
	while (b)
	{
		int r = a%b;
		a = b;
		b = r;
	}
	return a;
}
