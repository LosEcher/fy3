// Room: /u/xxy/room/huxi
inherit ROOM;

void create()
{
  set ("short", "��Ϫ");
  set ("long", @LONG
СϪ���¶���,Ϫ�Ͻ�����������,�ֱ�Ϊ��ԡ,��Х�ͻ�Ϫ.����
����,���͸���.����'��Ϫ����',Ϫˮ��Ȫ����,������ѩ,ʱ������
��Ϸ���,ˮ������.
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "northup" : __DIR__"luofeng",
  "south" : __DIR__"ligouyuan",
]));
set("outdoors","/d/emei");
  setup();
  replace_program(ROOM);

}
