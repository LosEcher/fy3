inherit ROOM;

void create ()
{
  set ("short", "��");
  set ("long", @LONG
������÷ׯ�Ĳ񷿣������������ҵĶѷ������õ�ľ��÷ׯ
���ճ��ò񶼴�����ȡ�������ǽ�ڰ��಻��������ǽ�Ϲ���һ��
���ˣ���֪����������ʲô�ġ��ݽ���һ�������Ĳ�ѣ���������
ľ����ĺ�Զ���㲻�ɵö࿴�����ۡ�
LONG);
        set("item_desc",([
        "stuff" : "����ϸ�۲죬���������ƺ���������⶯��\n",
        "chaidui" : "������߰���Ķѷ��ţ��ӷ�϶���ƺ����Կ���ʲô���������⣬���ҿ���\n",
]));

        set("exits", ([ /* sizeof() == 1 */
        "south" : __DIR__"heilang3",
]));

        setup();
}

void init()
{
        add_action("do_pull","pull");
        add_action("do_search","search");
}

int do_pull(string arg)
{
        object me,ob,sn;
        me = this_player();
        if (arg != "stuff") return 0;
        message_vision("��ǰһ�ڣ����߷�����������ֱ�졣�㷢�ֵ�������һ���ط���\n",me);
        me->move("/u/yuki/room/mishi1");
        return 1;
}

int do_search(string arg)
{
        object me,ob,sn;
        me = this_player();
        if (arg != "chaidui") return 0;
        if (me->query_temp("mark/key"))
                return notify_fail("��ɶ��û���֡�\n");
        if (me->query("gin") < 10 || me->query("kee") < 10 || me->query("sen") < 10)
                return notify_fail("��ʲô��û�ҵ���\n");
        message_vision("$N������Կ�ס�\n",me);
        me->set_temp("mark/key",1);
        ob=new("/u/yuki/obj/key");
        ob->move(me);
        return 1;
        }

