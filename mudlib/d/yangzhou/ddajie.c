// Room: /u/swordman/yangzhou/ddajie
inherit ROOM;

void create ()
{
  set ("short", "�����");
  set ("long", @LONG
����һ����������ʯ��ֵ���������ͷ���졣���߲�ʱ�ش�������ײ 
����������һ�����ӵ�Ժ�ӣ������εĴ����Ϸ�д�š�������Ժ���ĸ�
�̽���֣��Ծ����������治ʱ�ش���ѧ��������ٴ�Ķ�������
LONG);

  set("light_up", 1);
  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/liumang" : 1,
]));
  set("outdoors", "/u/swordman");
  set("exits", ([ /* sizeof() == 4 */
  "east" : __DIR__"ddajie1",
  "west" : __DIR__"guangchang",
  "north" : __DIR__"shuyuan",
  "south" : __DIR__"qiao",
]));

  setup();
}
