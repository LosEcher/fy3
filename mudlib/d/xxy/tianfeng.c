// Room: /d/xxy/tianfeng.c

inherit ROOM;

void create ()
{
  set ("short", "���¥");
  set ("long", @LONG
���¥��רΪ�Ҽ�����׼����,һ�ۿ�ȥ,���ƻ�,����¥̨,������ӳ
֮��,����һ������.������¥�ݿ�����ȥ.
LONG);

  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/tianshou.c" : 2,
]));
  set("exits", ([ /* sizeof() == 3 */
  "east" : __DIR__"gardon4",
  "north" : __DIR__"gardon3",
  "westup" : __DIR__"up1",
]));

  setup();
}
int valid_leave(object me,string dir)
{
   object ob;
   ob=present("pai",me);
   if (dir=="westup")
         {
            if (!ob||ob->query("name")!="����")
                 return notify_fail("������߼���ʿ��ס�����������ܽ���!\n");
          }
return ::valid_leave(me,dir);
}