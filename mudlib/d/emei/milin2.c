// Room: /u/xxy/room/milin2
inherit ROOM;

void create()
{
  set ("short", "����");
  set ("long", @LONG
����һƬŨ�ܵİ�ľ��,֦�½�é,���Ʊ���,��˵,��ǰ�и�������
�м����,��'��˾�'����Ϊ׼,������ͽ��ֲ��ľ,����10.9������,��
��������˵���Ǻ���,��Ϊ������·��.
LONG);

  set("exits", ([ /* sizeof() == 4 */
  "south" : __DIR__"milin2",
  "west" : __DIR__"milin3",
  "east" : __DIR__"milin2",
  "north" : __DIR__"milin3",
]));
set("outdoors","/d/emei");
  setup();
  replace_program(ROOM);

}
