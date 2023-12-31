#include <string>
#include <vector>
#include "fakerutil.h"

std::vector<std::string> first_names = {"Abimbola", "Abisola", "Abisoye", "Adeboye", "Adedayo", "Adegoke", "Akande", "Akanni", "Alade", "Ayinde", "Azubuike", "Banji", "Bankole", "Buchi", "Bukola", "Chinedu", "Chisom", "Chukwu", "Damilare", "Damilola", "Danjuma", "Ebiowei", "Emeka", "Emmanuel", "Esse", "Funmilade", "Funmilayo", "Gbeminiyi", "Gbemisola", "Habiba", "Ifeanyichukwu", "Ikenna", "Ikhidie", "Ireti", "Jadesola", "Johnson", "Kayode", "Kemi", "Kubra", "Kubura", "Lolade", "Makinwa", "Mohammed", "Musa", "Muyiwa", "Nnamdi", "Olaide", "Olufunmi", "Olumide", "Oluwunmi", "Onoriode", "Remilekun", "Rotimi", "Shade", "Shalewa", "Sname", "Tari", "Temitope", "Titilope", "Tobiloba", "Toke", "Tomiloba", "Tope", "Uzodimma", "Wale", "Yakubu", "Yusuf"};
std::vector<std::string> last_names = {
    "Abiodun",
    "Abiola",
    "Abodunrin",
    "Abosede",
    "Adaobi",
    "Adebayo",
    "Adegboye",
    "Adegoke",
    "Ademayowa",
    "Ademola",
    "Adeniyan",
    "Adeoluwa",
    "Aderinsola",
    "Aderonke",
    "Adesina",
    "Adewale",
    "Adewunmi",
    "Adewura",
    "Adeyemo",
    "Afolabi",
    "Afunku",
    "Agboola",
    "Agnes",
    "Aigbiniode",
    "Ajakaiye",
    "Ajose-adeogun",
    "Akeem-omosanya",
    "Akerele",
    "Akintade",
    "Aligbe",
    "Amaechi",
    "Aminat",
    "Aremu",
    "Atanda",
    "Ayisat",
    "Ayobami",
    "Ayomide",
    "Babalola",
    "Babatunde",
    "Balogun",
    "Bamisebi",
    "Bello",
    "Busari",
    "Chibike",
    "Chibuike",
    "Chidinma",
    "Chidozie",
    "Christian",
    "Clare",
    "David",
    "Ebubechukwu",
    "Egbochukwu",
    "Ehigiator",
    "Ekwueme",
    "Elebiyo",
    "Elizabeth",
    "Emmanuel",
    "Esther",
    "Funmilayo",
    "Gbadamosi",
    "Gbogboade",
    "Grace",
    "Habeeb",
    "Hanifat",
    "Isaac",
    "Ismail",
    "Isokun",
    "Israel",
    "Iyalla",
    "Jamiu",
    "Jimoh",
    "Joshua",
    "Justina",
    "Katherine",
    "Kayode",
    "Kimberly",
    "Ladega",
    "Latifat",
    "Lawal",
    "Leonard",
    "Makuachukwu",
    "Maryam",
    "Maryjane",
    "Mayowa",
    "Miracle",
    "Mobolaji",
    "Mogbadunade",
    "Motalo",
    "Muinat",
    "Mukaram",
    "Mustapha",
    "Mutiat",
    "Ndukwu",
    "Ngozi",
    "Nojeem",
    "Nwachukwu",
    "Nwogu",
    "Nwuzor",
    "Obiageli",
    "Obianuju",
    "Odunayo",
    "Ogunbanwo",
    "Ogunwande",
    "Okonkwo",
    "Okunola",
    "Oladeji",
    "Oladimeji",
    "Olaoluwa",
    "Olasunkanmi",
    "Olasunkanmi-fasayo",
    "Olawale",
    "Olubukola",
    "Olubunmi",
    "Olufeyikemi",
    "Olumide",
    "Olutola",
    "Oluwakemi",
    "Oluwanisola",
    "Oluwaseun",
    "Oluwaseyi",
    "Oluwashina",
    "Oluwatosin",
    "Omobolaji",
    "Omobolanle",
    "Omolara",
    "Omowale",
    "Onohinosen",
    "Onose",
    "Onyinyechukwu",
    "Opeyemi",
    "Osuagwu",
    "Oyebola",
    "Oyelude",
    "Oyinkansola",
    "Peter",
    "Sabdat",
    "Saheed",
    "Salami",
    "Samuel",
    "Sanusi",
    "Sarah",
    "Segunmaru",
    "Sekinat",
    "Sulaimon",
    "Sylvester",
    "Taiwo",
    "Tamunoemi",
    "Tella",
    "Temitope",
    "Tolulope",
    "Uchechi",
    "Wasiu",
    "Wilcox",
    "Wuraola",
    "Yaqub",
    "Yussuf",
};
;
// std::vector<std::string> first_male_names;

namespace faker
{
  namespace person
  {
    std::string first_name()
    {
      // int arrSize = sizeof(first_names) / sizeof(first_names[0]);
      int arrSize = static_cast<int>(first_names.size());
      int idx = faker::util::get_random_idx(0, arrSize);
      return first_names[idx];
    }

    std::string last_name()
    {
      // int arrSize = sizeof(last_names) / sizeof(last_names[0]);
      int arrSize = static_cast<int>(last_names.size());
      int idx = faker::util::get_random_idx(0, arrSize);
      return last_names[idx];
    }

    std::string full_name()
    {
      return first_name() + ' ' + last_name();
    }
  }
}