#include <ansi.h>

inherit KZZNPC;
int do_give();
string query_save_file() { return DATA_DIR + "npc/��Ԫ��"; }

void create()
{
#include <kzznpc.h>
set("inquiry",([
  "��ʮ���¾�":(:do_give:),
  ]));
set("key",1);
	setup();
add_money("silver",2);
carry_object("/obj/cloth")->wear();
}
int do_give()
{
  object ob=this_player();
	string bh;

	bh=(string)ob->query("banghui");
	if( !bh || bh!=(string)query("banghui"))	{
    message_vision("$N���˿�$n,������˸�����.\n",this_object(),ob);
	return 1;
	}
  if (query("key")!=1)  {
  	command("say �Ѿ��������ֵ�ȡ����.\n");
  	return 1;
  }
  if (find_object(__DIR__"obj/42book4.c")) {
    new(__DIR__"obj/key.c")->move(ob);
 message_vision("$Nȡ������ͭԿ�׸�$n��:���ھ��ǿ�ջ������.\n",this_object(),ob);
 set("key",0);
 return 1;
}
new(__DIR__"obj/42book4.c")->move(ob);
message_vision("$N���������ͳ������$n��:Ҫ�úñ���.\n",this_object(),ob);
set("key",0);
return 1;
}
