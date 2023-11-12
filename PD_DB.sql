CREATE TABLE Owners(
  OwnerID INTEGER NOT NULL,
  Name TEXT,
  PRIMARY KEY (OwnerID)
 );
  
CREATE TABLE Pets(
  PetID INTEGER NOT NULL,
  OwnerID INTEGER,
  Name TEXT,
  Spiecies TEXT,
  Treatment TEXT,
  PRIMARY KEY (PetID),
  FOREIGN KEY (OwnerID) REFERENCES Owners(OwnerID)
);

CREATE TABLE AdminPers(
  AdminPersID INTEGER NOT NULL,
  Name TEXT,
  Role TEXT,
  PRIMARY KEY (AdminPersID)
);

CREATE TABLE Appointments(
  AppointmentID INTEGER NOT NULL,
  DateAndTime DATETIME,
  PetID INTEGER,
  AdminPersID INTEGER,
  PRIMARY KEY (AppointmentID),
  FOREIGN KEY (PetID) REFERENCES Pets(PetID),
  FOREIGN KEY (AdminPersID) REFERENCES AdminPers(AdminPersID)
 );
  
CREATE TABLE Veterinarians(
  VeterinariansID INTEGER NOT NULL,
  Name TEXT,
  Role TEXT,
  PRIMARY KEY (VeterinariansID)
);

CREATE TABLE Specialization(
  SpecializationID INTEGER NOT NULL,
  SpecializationType TEXT,
  PRIMARY KEY (SpecializationID)
);

CREATE TABLE VeterinarianSpecialization(
  VeterinariansID INTEGER,
  SpecializationID INTEGER,
  FOREIGN KEY (VeterinariansID) REFERENCES Veterinarians(VeterinariansID),
  FOREIGN KEY (SpecializationID) REFERENCES Specialization(SpecializationID)
);
  
CREATE TABLE Services(
  ServiceID INTEGER NOT NULL,
  ServiceType TEXT,
  ServicePrice REAL,
  AppointmentID INTEGER,
  VeterinariansID INTEGER,
  PRIMARY KEY (ServiceID),
  FOREIGN KEY (AppointmentID) REFERENCES Appointments(AppointmentID),
  FOREIGN KEY (VeterinariansID) REFERENCES Veterinarians(VeterinariansID)
 );