// Room: /d/huanggon/xiangfang1
inherit ROOM;

void create()
{
  set ("short", "�᷿");
  set ("long", @LONG
�᷿�����Ϲ�������,�ı���ľ������,���Ƿ�������͵��������,��
�������ϰ���Щ̯�����鼮,һյ�͵ƻ���ȼ��,���ڵ�����̫ʦ�μ�����
С�輸,�ݽ����л������軨.
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"dating",
]));
  setup();
  replace_program(ROOM);
}
