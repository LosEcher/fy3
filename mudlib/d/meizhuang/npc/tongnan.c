// woodcutter.c

inherit NPC;

void create()
{
	set_name("ͯ��",({"tongnan","tong nan","kid"}));
	set("gender", "����" );
	set("age",10);
	set("long","ü��Ŀ���С�к���\n");
	set("combat_exp",1000);
	setup();
	carry_object("/obj/cloth")->wear();
}
