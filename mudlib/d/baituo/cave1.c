inherit ROOM;

void create()
{
        set("short","����ɽ�Ҷ���");
        set("long",@LONG
�������Ҷ��ڲ��������������Ž�׵�����ʯ��
������һ������ٵ�һ����
LONG
        );
  set("exits",([
      "south" : __DIR__"cave",
     ]));
 setup();
}
void init()
{
        add_action("do_pi","ba");
}
int do_pi(string arg)
{
        object me,ob;
        me = this_player();
        if (arg != "����ʯ")return notify_fail("��Ҫ��ʲô��\n");
        if(me->query("sen")< 100)return notify_fail("�㻹��ЪЪ�ɡ�\n");
        if(me->query_skill("dodge")< 40)return notify_fail("��ĵ��ϸߣ������ǹ���������ʯ��\n");
        if(me->query("score")>10000)return notify_fail("�������������ʯ��ʱ������д���һ��ŭ�ȣ����㻹�㵱������\n");
        me->add("kee",-100);
        message_vision("$N�߸�Խ��ץס������ʯ,һ���ӾͰ���������¶����һ��С����\n",me);
        set("exits/up", __DIR__"cave2");
        return 1;
}

