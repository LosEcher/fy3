// Room: /d/huanggon/jiaotaidian
inherit ROOM;

void create()
{
  set ("short", "��̩��");
  set ("long", @LONG
��̩��λ��Ǭ�幬��������֮��,�ǻ��Ҵ�������ĵط�,���ж�ʮ
�巽ӡ�������ڽ��֮��,���渲�Իƶ�.������Ҷ�֮��д��'��Ϊ'��
��.�����ǿ�д���ӵ�����.
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"kunningon",
  "south" : __DIR__"qianqingon",
]));
  setup();
}
int valid_leave(object me,string dir)
{
 if (dir=="south"&&me->query("xxy/lvl")<4)
return notify_fail("���������Ǭ�幬���ͱ��ص�������ס��!\n");
return ::valid_leave(me,dir);
}
