// guard.c

#include <ansi.h>

inherit NPC;
inherit F_SAVE;

void create()
{
	set_name("����",({"bao zheng","bao"}));

	set("title","��ͼ����");
	set("gender", "����" );
	set("age",40);
	set("str",50);
	set("cor",30);
	set("cps",50);
	set("int",50);
	set("con",50);
	set("mingwang",50000);
	set("long",
	"��ɫ��ڣ���ò���棬���Ȳ��������㲻����������������.
����ʲô��ϢҪͨ�����µ�,���Ը�5������.���¸����Ŷ������ʾ.\n"
	);
	set("attitude","friendly");
	set("inquiry", ([
	]) );
	setup();
}
void init()
{
  ::init();
  add_action("do_post","tonggao");
}
int accept_object(object who,object item)
{	
	if(item->query("money_id") &&
	item->value()>=50000)
	{
		command("say Ǯ�Ҿ�������,����ͨ��(tongao xxx)˵�����Ҫ��");
	who->set_temp("bao_flag",1);
		return 1;
	}
	command("ask "+who->query("id")+" about ����5�����ӣ�");
	return 0;
}
void done_post(object me, mapping note, string text)
{
        note["msg"] = text;
        set("note", note);
 command("say ���ͨ���Ѿ��䲼����,���������.\n");        
        this_player()->set_temp("post_ok_la",1);
        save();
        return;
}
int do_post(string arg)
{
 mapping note;
 object ob=this_player();
 if (!ob->query_temp("bao_flag"))
   return notify_fail("����Ǯ����!\n");
//if ((int)query("note/time")-time()<60*60)
//return notify_fail("��ͨ��䲼����,�����ͨ��������.\n");
        if(!arg) return notify_fail("ͨ����ָ��һ�����⡣\n");
        
        note = allocate_mapping(4);
        note["title"] = arg;
        note["author"] = this_player()->query("name");
        note["id"] = this_player()->query("id");
        note["time"] = time();
        this_player()->edit( (: done_post, this_player(), note :) );
        return 1;
}