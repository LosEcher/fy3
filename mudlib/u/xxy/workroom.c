// Room: /u/xxy/workroom.c

inherit ROOM;

void create ()
{
  set ("short", "�����");
  set ("long", @LONG
����һ�������ڵص׵Ķ�Ѩ,�ıڵ����һЩ��֪���Ķ�ֲ��,���ڵ��ѷ���¶����
��Ĺ�â,���˵�һ��ҹ���鷢�������һƬ����,һ����Ȫ�Ӷ��ڵ�һ����������ӿ��
��,���������ʯ��,�����м���һ��ʯ��(xiang),��̬�߹�.
LONG);

  set("no_magic", 1);
  set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"sleeproom.c",
  "zz" : "/d/wiz/meeting",
  "emei" : "/d/room/road.c",
]));
  set("item_desc", ([ /* sizeof() == 1 */
  "xiang" : "��Ϊ�����Զ,ʯ���ϸ�����һ����̦,����ϸ���˿�,����һ��,��Ȼ���ý��ʯ���
���ɵ�.
",
]));

  setup();
}
