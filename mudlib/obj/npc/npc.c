inherit NPC;

void create()
{
	mixed *dir;
	string filename,str,var,value;
	string name,id,skill;
	int age,level,move,follow,killer;
	int i,exp,woman;
	string weapon;
	dir=get_dir("/data/npc/",-1);
	filename ="/data/npc/"+dir[random(sizeof(dir))][0];
	i=0;
	while((str=read_file(filename,i,1)))		{
		if(sscanf(str,"name %s\n",name)==1);
		else if(sscanf(str,"id %s\n",id)==1);
		else if(sscanf(str,"age %d\n",age)==1);
		else if(sscanf(str,"level %d\n",level)==1);
		else if(sscanf(str,"move %d\n",move)==1);
		else if(sscanf(str,"follow %d\n",follow)==1);
		else if(sscanf(str,"killer %d\n",killer)==1);
		else if(sscanf(str,"woman %d\n",woman)==1);
		else  (sscanf(str,"skill %s\n",skill)==1);
		i++;
	}
        age += random(10);level += random(20);
        exp=(level*level*level*3)/10;

        set_name(name,({ id }));
        set("age",age);
        set("combat_exp",exp);
	set_skill("dodge",level);set_skill("parry",level);set_skill("force",level);
        set("max_force",level*10);set("force",level*10);
        set_skill("unarmed",level/2);
	if(!skill)			skill="unarmed";
        set_skill(skill,level);
	if(move)	{
        set("chat_chance",40);
        set("chat_msg", ({
                (: random_move :),
        }));
        }
	if(woman)	set("gender","Ů��");
	else set("gender","����");
	if(follow)		set("pursure",1);
	if(killer)		set("attitude","aggressive");
        if(skill!="unarmed")    weapon=skill;
        setup();
        if(weapon)
                carry_object("/obj/weapon/"+weapon)->wield();
}
	

