#feature on safety

#include <std2.h>
#include "helpers.h"

void drop_only() safe
{
  {
    std2::arc<std2::string_view> p;
    {
      std2::string s("hello, world!");

      // TODO: re-enable this test once we get pointer variance working
      // p = std2::arc(s.str());
      // assert_true(*p == "hello, world!"sv2);
    }
  }
}


int main() safe
{
  drop_only();
}
