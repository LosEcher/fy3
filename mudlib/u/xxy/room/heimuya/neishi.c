//ROOM neishi.c
inherit ROOM;
void init();
int do_move(string);
void create()
{
        set("short", "������̺���");
        set("long",
             "������������̵ĺ���������ȥ���ǻҳ�,���м���һ����(wan),�ƺ��йŹ�.��\n"
        );
        set("exits", ([
                "east" : __DIR__"huayuan",
        ]));

       set("item_desc", ([
            "wan" : ����һ���Ժ��������µĹŶ�,�ܱ��¡�\n"
        ]));
        setup();
}
void init()
{
        add_action("do_circle", "circle");
}

int do_circle(string arg)
{

        object me = this_player();
        object room;

        if ((arg != "wan") || !arg)
          return notify_fail("��Ҫ��ʲô��\n");
        if((int)me->query("str") < 20)
          return notify_fail("������������\n");
        if(!( room = find_object(__DIR__"midao")) )
           room = load_object(__DIR__"midao");
        if(!objectp(room))  return notify_fail("ERROR:not found 'midao.c' \n");
        if (!query("exits/down"))
          {
          set("exits/down", __DIR__"midao");
          message_vision("$N����������ֻ����ǽ��,¶��һ��������
              �Ķ��ڡ�\n",me);
          room->set("exits/up", __FILE__);
        return notify_fail("������������\n");
        if(!( room = find_object(__DIR__"midao")) )
           room = load_object(__DIR__"midao");
        if(!objectp(room))  return notify_fail("ERROR:not found 'midao.c' \n");
        if (!query("exits/down"))
          {
          set("exits/down", __DIR__"midao");
          message_vision("$N�������룬ֻ����ǽ��,¶��һ��������
              �Ķ��ڡ�\n",me);
          room->set("exits/up", __FILE__);
          message("vision", "���洫��һ��ᶯ���������һ���������˽�����
          \n", room);
          }
         else
          {
          delete("exits/down");
          message_vision("�ܿ����ְ����ԭλ����ǽ�ϵĶ����ֱ���ס�ˡ�\n",me);
          room->delete("exits/up");
          message("vision", "���洫��һ��ᶯ������������ڱ���ס�ˡ�\n", roo;
          }
       return 1;
}