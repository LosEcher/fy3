// Room: /u/swordman/yangzhou/xijie
inherit ROOM;

void create ()
{
  set ("short", "�����");
  set ("long", @LONG
���������ݳ�����Ĵ���ϣ��ؽֵ����������ֳ̼�Ⱥ������
���ﳵ���������������У�ҹ�����ǹ���£��ƻ�ͨ���������ǳ���
����Ҫ����ҵ���Ļ����ֽ֣����С�����ʮ������·�������ơ�
LONG);

  set("exits", ([ /* sizeof() == 4 */
  "north" : __DIR__"zhubaodian",
  "east" : __DIR__"guangchang",
  "west" : __DIR__"xijie1",
  "south" :__DIR__"caifengdian",
]));
  set("outdoors", "/u/swordman");
  set("light_up", 1);

  setup();
}
