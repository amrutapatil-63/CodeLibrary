#include <bits/stdc++.h>
using namespace std;

#define d 256

void search(char pat[], char txt[], int q)
{
	int M = strlen(pat);
	int N = strlen(txt);
	int i, j;
	int p = 0; // hash value for pattern
	int t = 0; // hash value for txt
	int h = 1;

	for (i = 0; i < M - 1; i++)
		h = (h * d) % q;

	// Calculate the hash value of pattern and first
	// window of text
	for (i = 0; i < M; i++)
	{
		p = (d * p + pat[i]) % q;
		t = (d * t + txt[i]) % q;
	}

	// Slide the pattern over text one by one
	for (i = 0; i <= N - M; i++)
	{
		if ( p == t )
		{
			bool flag = true;
			/* Check for characters one by one */
			for (j = 0; j < M; j++)
			{
				if (txt[i+j] != pat[j])
				{
				flag = false;
				break;
				}
				if(flag)
				cout<<i<<" ";
					
			}

			// if p == t and pat[0...M-1] = txt[i, i+1, ...i+M-1]
		
			if (j == M)
				cout<<"Pattern found at index "<< i<<endl;
		}

		if ( i < N-M )
		{
			t = (d*(t - txt[i]*h) + txt[i+M])%q;

			// We might get negative value of t, converting it
			// to positive
			if (t < 0)
			t = (t + q);
		}
	}
}

int main()
{
	char txt[] = "GEEKS FOR GEEKS";
	char pat[] = "GEEK";
	
	// A prime number
	int q = 101;
	
	// Function Call
	search(pat, txt, q);
	return 0;
}
