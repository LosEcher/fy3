inherit NPC;

void create()
{
restore_object("/data/npc/����");
	set("long",
	"��ɫ��ڣ���ò���棬���Ȳ��������㲻����������������.
����ʲô��ϢҪͨ�����µ�,���Ը�5������.���¸����Ŷ������ʾ.\n"
	);
set_name(query("name"),({query("id")}));
        set("max_force",(int)query_skill("force")*10);
        set("max_kee",220+(int)query_skill("force")*10/4);
        set("bellicosity",0);
        set("kee",query("max_kee"));
        set("eff_kee",query("max_kee"));
        set("gin",query("max_gin"));
        set("eff_gin",query("max_gin"));
        set("sen",query("max_sen"));
        set("eff_sen",query("max_sen"));
        set("force",query("max_force"));
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
save_object("/data/npc/����");
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