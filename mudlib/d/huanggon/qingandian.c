// Room: /d/huanggon/qingandian
inherit ROOM;

void create()
{
  set ("short", "�հ���");
  set ("long", @LONG
�հ��������,���аڷ�Ԫʼ���������,����һ��������,������
��,����֮ǰһֻ������¯,�����������޶���ô�,��Ϊ�������ŷ�,����
��˳��ҵ�.������ǧ��ͤ,������ͤ.
LONG);

  set("exits", ([ /* sizeof() == 4 */
  "west" : __DIR__"qianqiutin",
  "east" : __DIR__"wanchuntin",
  "north" : __DIR__"shenwumen",
  "south" : __DIR__"yuhuayuan2",
]));
  setup();
}
int valid_leave(object ob,string dir)
{
   if (!userp(ob)&&dir=="south"&&ob->query("home")==1) 
   return notify_fail("�����������:���Ǳ�������ȥ.\n");
   return ::valid_leave(ob,dir);
}