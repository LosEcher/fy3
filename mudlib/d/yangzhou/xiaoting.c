// Room: /u/swordman/yangzhou/xiaoting
inherit ROOM;

void create ()
{
  set ("short", "��ˮͤ");
  set ("long", @LONG
�����ǽ��ں�ˮ�ϵ�Сͤ������ƾˮС��ͤ���⡰��ˮͤ�����
��Ի�������緼�飬�����Ұ������ͤ���ǳ��̴�����
LONG);

  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/youke" : 1,
]));
  set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"jiedao2",
]));
  set("light_up", 1);

  setup();
}
