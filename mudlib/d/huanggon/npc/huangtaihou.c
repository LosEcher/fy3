#include <ansi.h>

inherit KZZNPC;
int do_give();
string query_save_file() { return DATA_DIR + "npc/��̫��"; }

void create()
{
#include <kzznpc.h>
set("inquiry",([
  "��ʮ���¾�":(:do_give:),
  ]));
set("book",1);
	setup();
add_money("gold",2);
}
int do_give()
{
  object ob=this_player();
  if (ob->query("banghui")!=query("banghui"))
    return notify_fail("��̫���˿���,����һ��.\n");
  if (query("book")!=1)  {
  	command("say �Ѿ�����Ҫ����,�´�Ҫ��Щ��.\n");
  	return 1;
  }
new(__DIR__"obj/42book3.c")->move(ob);
message_vision("$N���������ͳ������$n��:Ҫ�úñ���.\n",this_object(),ob);
set("book",0);
return 1;
}