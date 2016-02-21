
//d/zhongzhou/biwuchang.c
inherit ROOM;
string look_shelf();

void create()
{
         set("short", "����̨");
        set("long", @LONG
����һ�����ɼ�������̨����׳��ʵ��ľ������һƬƽ̨���Ľǵ�֧����
�߹����ĸ�����������Ĺ��ڶ�������ؿ���̨�ϵ�������䡣��̨�����и�
�����ܣ������ް�������ȫ��
LONG );
        set("outdoors", "zhouzhou");
         set("biwuchang", 1);
        set("item_desc", ([
                "shelf" : (: look_shelf :),
        ]));

        set("exits", ([
                "down"        : __DIR__"biwuchangyuan.c",
        ]));
        set("objects", ([
                __DIR__"npc/caipan.c": 1,
        ]));
        set("no_clean_up", 0);
        set("no_openshelf", 1);
        setup();
}

void init()
{
        add_action("do_war",({"fight","hit","kill","qiecuo"}));
        add_action("do_quit",({"du","dazuo","exercise","lian","learn","xue",
                    "practice","study","exit","quit","halt"}));
        add_action("do_take","take");
        add_action("do_open","open");
        add_action("do_close","close");
}
int valid_leave(object me, string dir)
{
        if( dir=="up" && !wizardp(me) )
                return notify_fail("����ϯֻ�б��������ܽ�ȥ��\n");
         if( dir=="down" && (me->query_temp("war_biwu")||me->query_temp("war_ask") ))
                 return notify_fail("\n");
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



