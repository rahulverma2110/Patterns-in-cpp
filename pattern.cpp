#include <iostream>
using namespace std;

int main()
{
    //I->ROW, J->COLUMN

//-------------------------------------------------
    /*int n;
    cin>>n;

    int i=1;
    while(i<=n)
    {
        int j=1;
        while(j<=n)
        {
            cout<<'*'<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }*/
//----------------------------------------------
    /*int n;
    cin>>n;

    int i=1;
    while(i<=n)
    {
        int j=1;
        while(j<=n)
        {
            cout<<i<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }*/
//------------------------------------------------
    /*int n;
    cin>>n;

    int i=1;
    while(i<=n)
    {
        int j=n;
        while(j>=1)
        {
            cout<<j<<" ";
            j--;
        }
        cout<<endl;
        i++;
    }*/
//-------------------------------------------------
    /*int n;
    cin>>n;

    int i=1;
    while(i<=n)
    {
        int j=1;
        while(j<=n)
        {
            cout<<j + n*(i-1)<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }*/

//-----------------SIMILAR PATTERNS------------------

    /*int n;
    cin>>n;

    int i=1;
    int count = 1;
    while(i<=n)
    {
        int j=1;
        while(j<=n)
        {
            cout<<count<<" ";
            count++;
            j++;
        }
        cout<<endl;
        i++;
    }*/

//--------------------------------------------

    /*int n;
    cin>>n;

    int i=1;
    while(i<=n)
    {
        int j=1;
        while(j<=i)
        {
            cout<<'*'<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }*/

//------------------------------------------------

    /*int n;
    cin>>n;

    int i=1;
    while(i<=n)
    {
        int j=1;
        while(j<=i)
        {
            cout<<j<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }*/

//-----------------------------------------------

    /*int n;
    cin>>n;
    int i=1;
    int count=1;
    while(i<=n)
    {
        int j=1;
        while(j<=i)
        {
            cout<<count<<" ";
            count++;
            j++;
        }
        cout<<endl;
        i++;
    }*/

//----------------------------------------------

    /*int n;
    cin>>n;

    int i=1;
    while(i<=n)
    {
        int j=1;
        while(j<=i)
        {
            cout<<i+j-1<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }*/
//----------------SIMILAR PATTERNS------------------
    /*int n;
    cin>>n;

    int i=1;
    
    while(i<=n)
    {
        int value = i;
        int j=1;
        while(j<=i)
        {
            cout<<value+j-1<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }*/

//-------------------------------------------------

    /*int n;
    cin>>n;

    int i=1;
    while(i<=n)
    {
        int j=1;
        while(j<=i)
        {
            cout<<i-j+1<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }*/

//------------------------------------------

    /*int n;
    cin>>n;

    int i=1;
    while(i<=n)
    {
        int j=1;
        while(j<=n)
        {
            char ch = 64 + i;
            cout<<ch<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }  */  

//----------------------------------------------

    /*int n;
    cin>>n;

    int i=1;
    while(i<=n)
    {
        int j=1;
        while(j<=n)
        {
            char ch = 64 + j;
            cout<<ch<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }*/

//------------------------------------------------

    /*int n;
    cin>>n;

    int i=1;
    int count=0;
    while(i<=n)
    {
        int j=1;
        while(j<=n)
        {
            char ch = 65 + count;
            cout<<ch<<" ";
            count++;
            j++;
        }
        cout<<endl;
        i++;
    }*/

//------------------------------------------------

    /*int n;
    cin>>n;

    int i=1;
    while(i<=n)
    {
        int j=1;
            while(j<=n)
            {
                char ch = 64+j+i-1;
                cout<<ch<<" ";
                j++;
            }
            cout<<endl;
            i++;
    }*/

//----------------------------------------------

    /*int n;
    cin>>n;

    int i=1;
    while(i<=n)
    {
        int j=1;
        while(j<=i)
        {
            char ch = 64+i;
            cout<<ch<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }*/

//------------------------------------------------

    /*int n;
    cin>>n;

    int i=1;
    int count = 1;
    while(i<=n)
    {
        int j=1;
        while(j<=i)
        {
            char ch = 64+count;
            cout<<ch<<" ";
            j++;
            count++;
        }
        cout<<endl;
        i++;
    }*/

//------------------------------------------------

    /*int n;
    cin>>n;

    int i=1;
    while(i<=n)
    {
        int j=1;
        while(j<=i)
        {
            char ch = 64+i+j-1;
            cout<<ch<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }*/

//-----------------------------------------------

    /*int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int j=1;
        while(j<=i)
        {
            cout<<n-i+j<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }*/
//-------------SIMILAR PATTERNS--------------------
    /*int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int j=1;
        while(j<=i)
        {
            char ch = 64+n-i+j;
            cout<<ch<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }*/
//-------------------------------------------------

    /*int n;
    cin>>n;

    int i=1;
    while(i<=n)
    {
        int j=1;
        while(j<=n)
        {
            while(j<=n-i)
            {
                cout<<" ";
                j++;
            }
            cout<<'*';
            j++;
        }
        cout<<endl;
        i++;
    }*/

//------------------------------------------------    

    /*int n;
    cin>>n;

    int i=1;
    while(i<=n)
    {
        int j=1;
        while(j<=n-i+1)
        {
            cout<<'*'<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }*/

//-------------------------------------------------

    /*int n;
    cin>>n;

    int i=1;
    while(i<=n)
    {
        int j=1;
        while(j<=n)
        {
            while(j<i)
            {
                cout<<" "<<" ";
                j++;
            }
            cout<<'*'<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }*/

//-------------------------------------------------

    /*int n;
    cin>>n;

    int i=1;
    while(i<=n)
    {
        int j=1;
        while(j<=n)
        {
            while(j<i)
            {
                cout<<" "<<" ";
                j++;
            }
            cout<<i<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }*/

//------------------------------------------------

    /*int n;
    cin>>n;

    int i=1;
    while(i<=n)
    {
        int j=1;
        while(j<=n)
        {
            while(j<=n-i)
            {
                cout<<" "<<" ";
                j++;
            }
            cout<<i<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }*/

//----------------------------------------------

    /*int n;
    cin>>n;

    int i=1;
    while(i<=n)
    {
        int j=1;
        while(j<=n)
        {
            while(j<i)
            {
                cout<<" "<<" ";
                j++;
            }
            cout<<j<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }*/

//------------------------------------------------

    /*int n;
    cin>>n;

    int i=1;
    int count = 1;
    while(i<=n)
    {
        int j=1;
        while(j<=n)
        {
            while(j<=n-i)
            {
                cout<<" "<<" ";
                j++;
            }
            cout<<count<<" ";
            count++;
            j++;
        }
        cout<<endl;
        i++;
    }*/

//------------------------------------------------

    /*int n;
    cin>>n;

    int i=1;
    while(i<=n)
    {
        int j=1;
        while(j<=n)
        {
            while(j<=n-i)
            {
                cout<<" "<<" ";
                j++;
            }
            cout<<i+j-n<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }*/

//--------------SIMILAR PATTERNS-------------------

    /*int n;
    cin>>n;

    int i=1;
    while(i<=n)
    {
        int count=1;
        int j=1;
        int space=n-i;
        while(space)
        {
            cout<<" "<<" ";
            space--;
        }

        while(j<=i)
        {
            cout<<j<<" ";
            j++;
        }

        cout<<endl;
        i++;
    }*/

//----------------------------------------------

    /*int n;
    cin>>n;

    int i=1;
    while(i<=n)
    {
        int count=1;
        int j=1;
        int space=n-i;
        while(space)
        {
            cout<<" "<<" ";
            space--;
        }
        //Print 1st triangle of number
        while(j<=i)
        {
            cout<<j<<" ";
            j++;
        }
        //Print 2nd triangle
        int start=i-1;
        while(start)
        {
            cout<<start<<" ";
            start--;
        }


        cout<<endl;
        i++;
    }*/

//-----------------------------------------------

    /* 1 2 3 4 5 5 4 3 2 1
       1 2 3 4 * * 4 3 2 1
       1 2 3 * * * * 3 2 1
       1 2 * * * * * * 2 1
       1 * * * * * * * * 1 */

    /*int n;
    cin>>n;

    int i=1;
    while(i<=n)
    {
        //Print 1st number triangle
        int j=1;
        while(j<=n-i+1)
        {
            cout<<j<<" ";
            j++;
        }

        //Print 1st * triangle
        int k=2;
        while(k<=i)
        {
            cout<<'*'<<" ";
            k++;
        }

        //Print 2nd * triangle
        int l=n+1;
        while(l<i+n && i>1)
        {
            cout<<'*'<<" ";
            l++;
        }

        //Print 2nd number triangle
        int m=n+1;
        j--;
        while(m<2*n+2-i)
        {
            cout<<j<<" ";
            m++;
            j--;
        }

        cout<<endl;
        i++;
    }*/

//------------EXTRA QUESTIONS FROM HERE-----------------

    /*       * * * * *
              * * * * 
               * * *
                * *
                 *    */


    /*int n;
    cin>>n;

    int i=1;
    while(i<=n)
    {
        int j=1;
        //Printing space triangle
        while(j<=i-1 && i>1)
        {
            cout<<" ";
            j++;
        }

        // Printing * triangle
        int k=1;
        while(k<=n-i+1)
        {
            cout<<'*'<<" ";
            k++;
        }

        cout<<endl;
        i++;
    }*/
            
//------------------------------------------------------

        /*       *
               * * *
             * * * * *
           * * * * * * *
         * * * * * * * * *     */

    /*int n;
    cin>>n;

    int i=1;
    while(i<=n)
    {
        //Print space triangle
        int j=1;
        while(j<=n-i)
        {
            cout<<" "<<" ";
            j++;
        }

        //Print 1st * triangle
        int k=1;
        while(k<=i)
        {
            cout<<'*'<<" ";
            k++;
        }

        //Print 2nd * triangle
        int t=1;
        while(t<=i-1)
        {
            cout<<'*'<<" ";
            t++;
        }
        cout<<endl;
        i++;
    }*/

//---------------------------------------------------

    /*int n;
    cin>>n;

    if(n%2==1){
    int i=1;
    while(i<=(n-1)/2)
    {
        int j=1;
        while(j<=(n-1)/2)
        {
            cout<<" "<<" ";
            j++;
        }

        cout<<'*';
        cout<<endl;
        i++;
    }

    int j=1;
    while(j<=n)
    {
        cout<<'*'<<" ";
        j++;
    }
    cout<<endl;

    i=(n+1)/2 + 1;
    while(i<=n)
    {
        int j=1;
        while(j<=(n-1)/2)
        {
            cout<<" "<<" ";
            j++;
        }
        cout<<'*';
        cout<<endl;
        i++;
    }
    }
    else{
        cout<<"Input should be an odd number"<<endl;
    }*/

//----------------------------------------------------

    /*             *
                 * * *
               * * * * *
             * * * * * * *
               * * * * *
                 * * *
                   *       */
    
    /*int n;
    cin>>n;

    int i=1;
    while(i<=(n+1)/2)
    {
        //Print 1st space triangle  (LU)
        int j=1;
        while(j<=(n+1)/2-i)
        {
            cout<<" "<<" ";
            j++;
        }

        //Print 1st * triangle  (LU)
        int jj=1;
        while(jj<=i)
        {
            cout<<'*'<<" ";
            jj++;
        }

        //Print 2nd * triangle  (RU)
        int k=1;
        while(i>1 && k<=i-1)
        {
            cout<<'*'<<" ";
            k++;
        }
        
        cout<<endl;
        i++;
    }

    while(i<=n)
    {
        //Print 2nd space triangle  (LB)
        int j=1;
        while(j<=(1-n)/2+i-1)
        {
            cout<<" "<<" ";
            j++;
        }

        //Print 3rd * triangle  (LB)
        int jj=1;
        while(jj<=n-i+1)
        {
            cout<<'*'<<" ";
            jj++;
        }

        //Print 4th * triangle  (RB)
        int k=1;
        while(k<=n-i)
        {
            cout<<'*'<<" ";
            k++;
        }

        cout<<endl;
        i++;
    }*/
}