// Room: /u/xxy/room/jiaojing2
inherit ROOM;

void create()
{
  set ("short", "С��");
  set ("long", @LONG
����С·��ǰ,�����𽥺ڰ�����,���ֻ������µ�·���ڹ���
֮��.̧ͷ����,��Ƭ���͵�ɽ�°����Χ����,ֻʣ��һ�����,ǰ��
��·��û�ںڰ���,�㷢���Ա�ɽ���������ѷ�.
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"zhuling",
  "west" : __DIR__"jiulaofe",
  "east" : __DIR__"wanhegu",
]));
set("outdoors","/d/emei");
  setup();
}
