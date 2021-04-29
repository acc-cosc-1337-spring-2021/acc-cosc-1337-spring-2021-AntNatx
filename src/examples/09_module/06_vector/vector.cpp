#include "vector.h"
using std::cout;
//

Vector::Vector(std::size_t s)
: size(s), elements{new int[s]}
{
    cout<<"Constructor(S)- create memory"<<elements<<"\n";

}
//  1. initialize size for v1
// 2. initialize memory for v1
// 3. copy elemnt values from v to v1
Vector::Vector(const Vector& v)
: size{v.size}, elements{ new int[v.size]}
{
    cout<<"Execute copy constructor\n";

    for (std::size_t i = 0; i < v.size; i++)
    {
        elements[i] = v.elements[i];
    }
    
}