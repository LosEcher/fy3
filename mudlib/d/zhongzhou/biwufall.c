
//d/zhongzhou/biwufall.c
inherit ROOM;
string look_shelf();

void create()
{
         set("short", "ϯ��");
        set("long", @LONG
�����Ǳ���̨�ԱߵĴ�ϯ����аڷ���ʮ����ľ�����������Ŵ�
����̨�ϰ��������ĸ�·���֡��������������������ڲ鿴���ǵ���
�ơ�ϯ���г����˲�ҩ��ζ����
LONG );
        set("item_desc", ([
                "shelf" : (: look_shelf :),
        ]));

        set("exits", ([
                 "westdown"        : __DIR__"biwuchangyuan.c",
        ]));
         set("no_fight", 1);
         set("no_steal", 1);
         set("no_drop", 1);
        set("no_clean_up", 0);
        set("no_openshelf", 1);
        setup();
}

void init()
{
        add_action("do_war",({"fight","hit","kill","qiecuo"}));
        add_action("do_quit",({"du","dazuo","exercise","lian","learn","xue",
                   "practice","study","exit","quit"}));
        add_action("do_take","take");
        add_action("do_open","open");
        add_action("do_close","close");
}
int valid_leave(object me, string dir)
{
        if( dir=="up" && !wizardp(me) )
                return notify_fail("����ϯֻ�б��������ܽ�ȥ��\n");
        me->set_temp("view_leitai",1);
        return ::valid_leave(me, dir);
}
int do_war(string arg)
{
        write(this_player()->query("name")+"���ڱ��䳡ֻ����ָ�� biwu ���д裡\n");
         return 1;
}
int do_quit(string arg)
{
        write(this_player()->query("name")+"��ר�ı���ɣ�\n");
        return 1;
}



