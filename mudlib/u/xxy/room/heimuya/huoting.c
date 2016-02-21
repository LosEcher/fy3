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
                "east" : __DIR__"house1",
                "west" : __DIR__"restroom",
                "north":__DIR__"chengdedian",
        ]));

       set("item_desc", ([
            "wan" : "����һ���Ժ��������µĹŶ�,�ܱ��¡�\n",
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
        if((int)me->query("str") < 12)
          return notify_fail("���������һƬ12��������\n");
        if(!( room = find_object(__DIR__"didao1")) )
           room = load_object(__DIR__"didao1");
        if(!objectp(room))  return notify_fail("ERROR:not found 'didao1.c' \n");
        if (!query("exits/down"))
          {
          set("exits/down", __DIR__"didao1");
          message_vision("$N��������������ǽ��,¶��һ�������ĵĶ���.\n",me);                    
         room->set("exits/out", __DIR__"huoting");
         return notify_fail("һ��Ҫץ��ʱ�䣬�ߺ������ϡ�\n");
        }
        if(!( room = find_object(__DIR__"didao1")) )
           room = load_object(__DIR__"didao1");
        if(!objectp(room))  return notify_fail("ERROR:not found 'didao1.c' \n");
        if (!query("exits/down"))
          {
          set("exits/down", __DIR__"didao1");
          message_vision("$N�������룬ֻ����ǽ��,¶��һ��������
              �Ķ��ڡ�\n",me);
          room->set("exits/out", __DIR__"huoting");
          message("vision", "���洫��һ��ᶯ���������һ���������˽�����
          \n", room);
          }
         else
          {
          delete("exits/down");
          message_vision("�ܿ����ְ����ԭλ����ǽ�ϵĶ����ֱ���ס�ˡ�\n",me);
          room->delete("exits/out");
          message("vision", "���洫��һ��ᶯ������������ڱ���ס�ˡ�\n", room);
          }
       return 1;
}