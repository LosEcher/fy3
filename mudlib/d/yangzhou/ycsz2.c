// Room: /u/swordman/yangzhou/ycsz2
inherit ROOM;

void create ()
{
  set ("short", "��Ҷ��ի");
  set ("long", @LONG
����С¥�������ݰ˹�֮�ף������黭���Ұ����������鷿--
��Ҷ��ի��С¥�����ˮ����ˮ����������������ֻ��������
��һ���������һ�������辶���������Ǻɻ����ˡ�
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"ycsz3",
  "north" : __DIR__"ycsz1",
]));
  set("light_up", 1);
  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/zhengbanqiao" : 1,
]));

  setup();
}
