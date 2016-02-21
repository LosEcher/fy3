inherit ROOM;

void init();
string look_gate();
int do_open(string);
int do_lock(string);

void create()
{
        set("short", "Ժ��");
        set("long",@LONG
���Ǻں�����һ�����ң�ʲô�����������ںڰ���������Լ��
�����δ�δ𡱵�ˮ������֪����ʲô�ط�����ֻ�ü���������ǰ
�ߡ�ͻȻǰ�������ŵ�ס�����ȥ·��
LONG);

        set("item_desc", ([
            "door" : (: look_gate :),
        ]));

        set_temp("lock",1);

        setup();
//        replace_program(ROOM);
}

void init()
{
        add_action("do_open", "open");
        add_action("do_lock", "lock");

}

string look_gate()
{
        if (query_temp("lock") == 0)
                return "���ϵ����������ˡ�\n";
        return "�����ű�����������ס��\n";
}

int do_open(string arg)
{
        object me=this_player(), room;

        if(!arg || arg!="door")
                return notify_fail("��Ҫ��ʲô��\n");

        if( query_temp("lock") == 1 && !present("key", me) )
                return notify_fail("������ô���ţ�\n");

        if(!( room = find_object("/u/yuki/room/taoyuan")) )
                room = load_object("/u/yuki/room/taoyuan");

        if(!objectp(room))
                return notify_fail("ERROR:not found 'taoyuan.c' \n");

        if(query_temp("lock") == 1 && present("key", me))
        {
                set_temp("lock", 0);
                message_vision("$N��Կ�ײ�����ף�����һת�������ˡ�\n", me);
                message("vision", "���洫��һ������������ֻ��������ડ�һ���������ˡ�
  \n",room);
}
   message_vision("$N�ƿ��ţ���ǰһ��ǿ�ҵĹ��ߡ����Լ������ˡ�\n",me);
   message("vision", "�������˽�������������Զ������ˡ�\n",room);
   me->move(room);
   return 1;
}

int do_lock(string arg)
{
        object me=this_player();
        object room;

        if(!arg ||  arg!="door")
                return notify_fail("��Ҫ��ʲô��\n");
        if( !present("key",me))
                return notify_fail("������ʲô���Ű���\n");
        if(!( room = find_object("/u/yuki/room/taoyuan")) )
                room = load_object("/u/yuki/room/taoyuan");
        if(!objectp(room))
                return notify_fail("ERROR:not found 'taoyuan.c' \n");

        if(query_temp("lock") == 1)
                return notify_fail("���Ѿ������ˡ�\n");
        set_temp("lock",1);
        message_vision("$N��Կ�ײ�����ף�ֻ��������ડ�һ�����������ϡ�\n",me);
        message("vision", "���洫��һ����������������ֻ��������ડ�һ�������������ˡ�
  \n",room);

        return 1;
}

