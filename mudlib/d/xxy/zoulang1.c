// Room: /d/xxy/zoulang1.c

inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG
һ������ǽ�Ļ���,��һ�߾��ǻ�԰,�Ӵ˿�ȥ,��԰��һ����¥ʮ������. 
����[��]��������ס�����¥.�����µ������ڷ��е�������.����һ�䷿��,  
��[��]����ʿ��ס��. 
LONG);

  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/wushi.c" : 1,
]));
  set("outdoors", "/d/xxy");
  set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"zoulang2",
  "southeast" : __DIR__"zoulang",
  "east" : __DIR__"yangroom",
]));

  setup();
}
int valid_leave(object me,string dir)
{
    object ob;
    ob=present("pai",me);
    if (!ob&&dir=="east") return notify_fail("�㲻�ǵȼ���ʿ���������������?\n");
    else
    return ::valid_leave(me,dir);
}
