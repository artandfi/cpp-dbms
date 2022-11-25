#include <string>
#include <vector>
#include <mutex>

using namespace std;

class Field
{
public:
    Field(const string &name) : m_name(name) {}
    virtual ~Field() {}

private:
    string m_name;
};

template <typename T>
class TypedField : public Field {
public:
    TypedField(const std::string &name, const T &data) : Field(name), m_data(data) {}

private:
    T m_data;
};

typedef vector<shared_ptr<Field> > property_list_type;
