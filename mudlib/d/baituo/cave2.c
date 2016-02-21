// Room: /d/baituo/cave2.c

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
�������Ҷ��Ķ������ռ��С��ֻ��һ�������
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
  "down" : __DIR__"cave1",
]));
	setup();
}
void init()
{
        add_action("do_mo","mo");
        add_action("do_qiao","qiao");
        add_action("do_mo","search");
}
int do_mo()
{
        object me;
        me = this_player();
        if( me->is_busy() )
                return notify_fail("һ������ô���ط����㻹Ҫ������ѽ��\n");  
        message_vision("$N�ںڰ����Ĵ���������\n", me);
        me->add("kee",-30);
        me->start_busy(2);
        call_out("search",2, me);
        return 1;
}

int search()
{
        object me,ob;
        int kar;
        me = this_player();
        kar = (int)me->query("kar");
        if(random(200) < kar) 
        {
        tell_object(me, "����������ǽ������һ����ʯͷ�е��ɶ����������˿���\n");
        me->set("mark/find", 1);
        return 1;
        }
        tell_object(me, "��ʲô��û���֡� \n");
        return 1;
}

int do_qiao(string arg)
{
        object me,ob;
        me = this_player();
        if (me->query("mark/find"))
        {
        if (arg == "ʯ��")
                {
                if (me->query("kee")<200)return notify_fail("��ʹ��������ʯ�ڣ�����û�˶�������Ъһ��ɡ�\n");
         if (sizeof(children(__DIR__"obj/gshepi.c")) >1)
                return notify_fail("���þ�ȫ�����������һ�����˿����ǿ��ɶ���ʯ�ڣ�����ʲô��û������\n");
        message_vision("$N�þ�ȫ�����������һ�����˿����ǿ��ɶ���ʯ�ڣ���������ֽһ���Ķ�����������,��Ͻ������˻��\n",me);
        me->add("kee",-200);
        me->delete("mark/find");
       ob=new(__DIR__"obj/gshepi");
        ob->move(me);
return 1;
                }
        }
}

