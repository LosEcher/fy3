// Room: /u/xxy/room/milin4
inherit ROOM;

void create()
{
  set ("short", "����");
  set ("long", @LONG
����һƬŨ�ܵ�ɼľ��,֦�½�é,���Ʊ���,��˵,��ǰ�и�������
�м����,��'��˾�'����Ϊ׼,������ͽ��ֲ��ľ,����10.9������,��
��������˵���Ǻ���,��Ϊ������·��.
LONG);

  set("exits", ([ /* sizeof() == 4 */
  "north" : __DIR__"fohushi",
  "west" : __DIR__"milin2",
  "east" : __DIR__"milin2",
  "south" : __DIR__"milin3",
]));
set("outdoors","/d/emei");
  setup();
  replace_program(ROOM);

}
