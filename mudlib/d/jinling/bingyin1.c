// Room: /u/cyj/room/bingyin1.c
inherit ROOM;

void create()
{
  set ("short", "��Ӫ");
  set ("long", @LONG
������ͳ������Ӫ��"����"����һ������֮��,����֮�˲��ý��롣����
ððȻ���룬���ܻᱻ;���ɼ�ϸץ������
LONG);

  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/chengshou.c" : 1,
]));
  set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"bingyin.c",
]));
  set("light_up", 1);
  setup();
}
