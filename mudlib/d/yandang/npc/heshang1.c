inherit KZZNPC;

string query_save_file() { return DATA_DIR + "npc/����"; }
void create()
{
#include <kzznpc.h>
	setup();
	carry_object("/obj/cloth")->wear();
	carry_object("/obj/std/armor/pijia")->wear();
}
void init()
{
  ::init();
   command("guard up");
}
    

