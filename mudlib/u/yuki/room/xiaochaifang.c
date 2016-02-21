// Room: /u/yuki/room/xiaochaifang.c
//by yuki, Dec. 99

inherit ROOM;

void create()
{
        set("short", "��");
        set("long", @LONG
������÷ׯ�Ĳ񷿣������������ҵĶѷ������õ�ľ��÷ׯ
���ճ��ò񶼴�����ȡ�������ǽ�ڰ��಻��������ǽ�Ϲ���һ��
���ˣ���֪����������ʲô�ġ��ݽ���һ�������Ĳ�ѣ���������
ľ����ĺ�Զ���㲻�ɵö࿴�����ۡ�
LONG
        );
        set("item_desc", ([ /* sizeof() == 2 */
        "chaidui" : "������߰���Ķѷ��ţ��ӷ�϶���ƺ����Կ���ʲô���������⣬���ҿ���",
        "stuff" : "����ϸ�۲죬���������ƺ���������⶯��",
]));
        set("no_clean_up", 0);
        set("exits", ([ /* sizeof() == 2 */
        "south" : __DIR__"heilang3",
]));

        setup();
//      replace_program(ROOM);
}

void init()
{
        add_action("do_pull","pull");
        add_action("do_search","search");
}

int do_pull(string arg)
{
        object me;
        me=this_player();
        if(arg!="stuff") return 0; 
        message_vision("$N����İ��˰����ˣ�ǽ��ͻȻ����һ���󶴣�һ�������������˽�ȥ��\n", me);
        this_player()->move(__DIR__"mishi1"); 
        message_vision("$N���������ĵ��˽�����ˤ�Ļ������ࡣ\n", me);

        return 1;
}

int do_search(string arg)
{       
        object me;
object ob;
ob = this_object();
        me=this_player();
       if(arg!="chaidui") return 0;
        message_vision("$N�Ӳ���·������ҳ�һ��Կ�ס�\n", me);
        ob = new(__DIR__"obj/key");
        ob->move(me);

        return 1;
}


