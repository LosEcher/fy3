// Room: /d/new/tianxia/binguan
inherit ROOM;

void create()
{
  set ("short", "ӭ����");
  set ("long", @LONG
������Ʋʱ�������ǰ���øߴ����������ס�˴��,Ũ�ܵ������һ
���֦Ҷֱ����������ڲ�.ƽ������ʯһֱ�̵���ɫ�Ĵ��ſ�.�ڵ׺���
���Ҷ�ϵ����ɰд��.������һƬ�ճ�.
LONG);

  set("outdoors", "/d/new");
  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"binguan1",
  "north" : __DIR__"1guan5",
]));
  setup();
}
