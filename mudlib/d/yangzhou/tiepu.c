// Room: /u/swordman/yangzhou/tiepu
inherit ROOM;

void create ()
{
  set ("short", "������");
  set ("long", @LONG
����һ�Ҵ����̣������������Ŵ󴸣������Ÿ������������
���������Ǵ�õļ������������ֻ������ǳ��õ�һЩ���������
�����̽���ذ�׵ȡ�
LONG);

  set("light_up", 1);
  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/wangtiejiang" : 1,
]));
  set("outdoors", "x");
  set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"ddajie1",
]));

  setup();
}
