// Room: /u/swordman/yangzhou/dangpu
inherit ROOM;

void create ()
{
  set ("short", "���ǵ���");
  set ("long", @LONG
����һ����������ƽ���Ƶĵ��̣�һ����߸ߵĹ�̨���������ǰ��
��̨�ϰ���һ������(paizi)����̨�����ŵ����ϰ壬һ˫�������۾���
�����´������㡣 
LONG);

  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/liu.c" : 1,
]));
  set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"nandaj1",
]));
  set("item_desc", ([ /* sizeof() == 1 */
  "paizi" : "��ƽ����,ͯ�����ۡ�
",
]));

  setup();
}
