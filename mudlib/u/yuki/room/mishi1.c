inherit ROOM;

void create()
{
        set("short", "��������");
        set("long", @LONG
���Ǻں�����һ�����ң�ʲô�����������ںڰ���������Լ��
�����δ�δ𡱵�ˮ������֪����ʲô�ط��������һ���������
��ǰ��ȥ��ӭ����һ��ǽ������ȥʪ�����ġ�
LONG);

        set("item_desc",([
        "wall" : "�ں����ģ�ʲôҲ��������\n",
        "button" : "�ں����ģ�ʲôҲ��������\n",
]));

        setup();
}

void init()
{
         add_action("do_touch","touch");
        add_action("do_an","an");
}

 int do_touch(string arg)
{
        object me,ob,sn;
       me = this_player();
      if (arg !="wall") return 0;
       message_vision("������һ��ͻ���ƺ��Ǹ���ť��\n", me);
       return 1;
}

int do_an(string arg)
{
        object me;
        me = this_player();
        if (arg != "button") return 0;
        message_vision("���������ߡ���¡��һ�����죬�ذ��ѿ��ˣ��������ȥ��\n",me);
        me->move("/u/yuki/room/mishi2");
        return 1;
}
