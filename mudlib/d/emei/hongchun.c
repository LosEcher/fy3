// Room: /u/xxy/room/hongchun
inherit ROOM;

void create()
{
  set ("short", "�鴻ƺ");
  set ("long", @LONG
����ɽ��,չ������ǰ����һ��Ƭƽ����ʯ��,��������øߴ�ĺ�
������,�˴��ļ��紺,�徻����,¥����Ӱ��������ãã�ֺ�����������
֮��.���������������������,�̿��л�������������.
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "southdown" : __DIR__"jushich",
  "northup" : __DIR__"jinding",
]));
set("outdoors","/d/emei");
  setup();
  replace_program(ROOM);

}
