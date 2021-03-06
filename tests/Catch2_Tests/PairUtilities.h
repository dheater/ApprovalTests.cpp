#include <map>
#include <ostream>

namespace ApprovalTests
{
    inline std::ostream& operator<<(std::ostream& os,
                                    const std::pair<std::string, int>& pair)
    {
        os << "(" << pair.first << ", " << pair.second << ")";
        return os;
    }
}
