#include<iostream>
using namespace std;
class Properties
{
	private:
		int id;
		public:
			void setId(int id)
			{
				id=id;
			}
			int getId(int id)
			{
				return id;
	        }
};
int main()
{
	Properties obj;
	obj.setId(10);
	cout<<obj.getId(10);
}
