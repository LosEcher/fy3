#include <ansi.h>

inherit KZZNPC;
int do_give();
string query_save_file() { return DATA_DIR + "npc/���е�"; }

void create()
{
#include <kzznpc.h>
set("inquiry",([
  "��ʮ���¾�":(:do_give:),
  ]));
set("book",1);
	setup();
	carry_object("/obj/std/armor/tongkui")->wear();
	carry_object("/obj/std/armor/tongjia")->wear();
	carry_object("/obj/std/armor/tongxue")->wear();
	carry_object("/obj/std/armor/tongshoutao")->wear();
add_money("silver",2);
}
int do_give()
{
  object ob=this_player();
	string bh;

	bh=(string)ob->query("banghui");
  if ( !bh || bh!=(string)query("banghui"))	{
	tell_object(ob,"���е����˿���,����һ��.\n");
	return 1;
  }
  if (query("book")!=1)  {
  	tell_object(ob,"�Ѿ�����Ҫ����,�´�Ҫ��Щ��.\n");
  	return 1;
  }
  if (find_object(__DIR__"obj/42book2.c")) {
    new(__DIR__"obj/daodejing.c")->move(ob);
 message_vision("$N������ϳ�������$n��:�Ȿ����?\n",this_object(),ob);
 set("book",0);
 return 1;
}
new(__DIR__"obj/42book2.c")->move(ob);
message_vision("$N���������ͳ������$n��:Ҫ�úñ���.\n",this_object(),ob);
set("book",0);
return 1;
}