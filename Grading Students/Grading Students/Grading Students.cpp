#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the gradingStudents function below.
 */

int checknumb(int grade)
{
	while ((grade % 5) != 0)
	{
		grade++;
	}
	return grade;

}

vector<int> gradingStudents(vector<int> grades) {
	int temp = 0;
	vector<int> result;
	for (int i = 0; i < grades.size(); i++)
	{
		if (grades[i] >= 38 && (grades[i] % 5) >= 3)
		{
			temp = checknumb(grades[i]);
			result.push_back(temp);

		}
		else
		{
			result.push_back(grades[i]);
		}
	}
	return result;

}

int main()
{
	ofstream fout(getenv("OUTPUT_PATH"));

	int n;
	cin >> n;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	vector<int> grades(n);

	for (int grades_itr = 0; grades_itr < n; grades_itr++) {
		int grades_item;
		cin >> grades_item;
		cin.ignore(numeric_limits<streamsize>::max(), '\n');

		grades[grades_itr] = grades_item;
	}

	vector<int> result = gradingStudents(grades);

	for (int result_itr = 0; result_itr < result.size(); result_itr++) {
		fout << result[result_itr];

		if (result_itr != result.size() - 1) {
			fout << "\n";
		}
	}

	fout << "\n";

	fout.close();

	return 0;
}