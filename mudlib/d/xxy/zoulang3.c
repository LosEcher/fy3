// Room: /d/xxy/zoulang3.c

inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG
һ������ǽ�Ļ���,��һ�߾��ǻ�԰,�Ӵ˿�ȥ,��԰��һ����¥ʮ������. 
����'��'��������ס�����¥.�����µ������ڷ��е�������.������[��]����ʿ 
�ľ���. 
LONG);

  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/wushi.c" : 1,
]));
  set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"zoulang2",
  "north" : __DIR__"zoulang4",
  "west" : __DIR__"weiroom",
]));
  set("outdoors", "/d/xxy");

  setup();
}
int valid_leave(object me,string dir)
{
   object ob;
   ob=present("pai",me);
   if (dir=="west")       {
              if (!ob)
       return notify_fail("�㲻�ǵȼ���ʿ������ν�����?\n");
              if (ob->query("name")=="����")
       return notify_fail("��ֻ��[��]����ʿ�����ܽ��ⷿ��!\n");
       }
return ::valid_leave(me,dir);
} 
